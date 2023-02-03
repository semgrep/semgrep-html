(**
   Boilerplate to be used as a template when mapping the html CST
   to another type of tree.
*)

(* Disable warnings against unused variables *)
[@@@warning "-26-27"]

(* Disable warning against unused 'rec' *)
[@@@warning "-39"]

type env = unit

let token (env : env) (_tok : Tree_sitter_run.Token.t) =
  failwith "not implemented"

let blank (env : env) () =
  failwith "not implemented"

let todo (env : env) _ =
   failwith "not implemented"

let map_start_tag_name (env : env) (tok : CST.start_tag_name) =
  (* start_tag_name *) token env tok

let map_doctype (env : env) (tok : CST.doctype) =
  (* pattern [Dd][Oo][Cc][Tt][Yy][Pp][Ee] *) token env tok

let map_pat_98d585a (env : env) (tok : CST.pat_98d585a) =
  (* pattern "[^\"]+" *) token env tok

let map_pat_03aa317 (env : env) (tok : CST.pat_03aa317) =
  (* pattern [^>]+ *) token env tok

let map_end_tag_name (env : env) (tok : CST.end_tag_name) =
  (* end_tag_name *) token env tok

let map_attribute_name (env : env) (tok : CST.attribute_name) =
  (* pattern "[^<>\"'/=\\s]+" *) token env tok

let map_raw_text (env : env) (tok : CST.raw_text) =
  (* raw_text *) token env tok

let map_implicit_end_tag (env : env) (tok : CST.implicit_end_tag) =
  (* implicit_end_tag *) token env tok

let map_pat_58fbb2e (env : env) (tok : CST.pat_58fbb2e) =
  (* pattern "[^']+" *) token env tok

let map_script_start_tag_name (env : env) (tok : CST.script_start_tag_name) =
  (* script_start_tag_name *) token env tok

let map_semgrep_metavariable (env : env) (tok : CST.semgrep_metavariable) =
  (* semgrep_metavariable *) token env tok

let map_style_start_tag_name (env : env) (tok : CST.style_start_tag_name) =
  (* style_start_tag_name *) token env tok

let map_erroneous_end_tag_name (env : env) (tok : CST.erroneous_end_tag_name) =
  (* erroneous_end_tag_name *) token env tok

let map_text (env : env) (tok : CST.text) =
  (* pattern [^<>\s]([^<>]*[^<>\s])? *) token env tok

let map_attribute_value (env : env) (tok : CST.attribute_value) =
  (* pattern "[^<>\"'=\\s]+" *) token env tok

let map_doctype_ (env : env) ((v1, v2, v3, v4) : CST.doctype_) =
  let v1 = (* "<!" *) token env v1 in
  let v2 =
    (* pattern [Dd][Oo][Cc][Tt][Yy][Pp][Ee] *) token env v2
  in
  let v3 = map_pat_03aa317 env v3 in
  let v4 = (* ">" *) token env v4 in
  todo env (v1, v2, v3, v4)

let map_quoted_attribute_value (env : env) (x : CST.quoted_attribute_value) =
  (match x with
  | `SQUOT_opt_pat_58fbb2e_SQUOT (v1, v2, v3) ->
      let v1 = (* "'" *) token env v1 in
      let v2 =
        (match v2 with
        | Some x -> map_pat_58fbb2e env x
        | None -> todo env ())
      in
      let v3 = (* "'" *) token env v3 in
      todo env (v1, v2, v3)
  | `DQUOT_opt_pat_98d585a_DQUOT (v1, v2, v3) ->
      let v1 = (* "\"" *) token env v1 in
      let v2 =
        (match v2 with
        | Some x -> map_pat_98d585a env x
        | None -> todo env ())
      in
      let v3 = (* "\"" *) token env v3 in
      todo env (v1, v2, v3)
  )

let map_erroneous_end_tag (env : env) ((v1, v2, v3) : CST.erroneous_end_tag) =
  let v1 = (* "</" *) token env v1 in
  let v2 = (* erroneous_end_tag_name *) token env v2 in
  let v3 = (* ">" *) token env v3 in
  todo env (v1, v2, v3)

let map_attribute (env : env) ((v1, v2) : CST.attribute) =
  let v1 = (* pattern "[^<>\"'/=\\s]+" *) token env v1 in
  let v2 =
    (match v2 with
    | Some (v1, v2) ->
        let v1 = (* "=" *) token env v1 in
        let v2 =
          (match v2 with
          | `Attr_value tok ->
              (* pattern "[^<>\"'=\\s]+" *) token env tok
          | `Quoted_attr_value x -> map_quoted_attribute_value env x
          )
        in
        todo env (v1, v2)
    | None -> todo env ())
  in
  todo env (v1, v2)

let map_end_tag (env : env) (x : CST.end_tag) =
  (match x with
  | `Semg_end_tag (v1, v2, v3) ->
      let v1 = (* "</" *) token env v1 in
      let v2 = (* semgrep_metavariable *) token env v2 in
      let v3 = (* ">" *) token env v3 in
      todo env (v1, v2, v3)
  | `LTSLASH_end_tag_name_GT (v1, v2, v3) ->
      let v1 = (* "</" *) token env v1 in
      let v2 = (* end_tag_name *) token env v2 in
      let v3 = (* ">" *) token env v3 in
      todo env (v1, v2, v3)
  )

let map_script_start_tag (env : env) ((v1, v2, v3, v4) : CST.script_start_tag) =
  let v1 = (* "<" *) token env v1 in
  let v2 = (* script_start_tag_name *) token env v2 in
  let v3 = List.map (map_attribute env) v3 in
  let v4 = (* ">" *) token env v4 in
  todo env (v1, v2, v3, v4)

let map_style_start_tag (env : env) ((v1, v2, v3, v4) : CST.style_start_tag) =
  let v1 = (* "<" *) token env v1 in
  let v2 = (* style_start_tag_name *) token env v2 in
  let v3 = List.map (map_attribute env) v3 in
  let v4 = (* ">" *) token env v4 in
  todo env (v1, v2, v3, v4)

let map_script_element (env : env) ((v1, v2, v3) : CST.script_element) =
  let v1 = map_script_start_tag env v1 in
  let v2 =
    (match v2 with
    | Some tok -> (* raw_text *) token env tok
    | None -> todo env ())
  in
  let v3 = map_end_tag env v3 in
  todo env (v1, v2, v3)

let map_start_tag (env : env) (x : CST.start_tag) =
  (match x with
  | `Semg_start_tag (v1, v2, v3, v4) ->
      let v1 = (* "<" *) token env v1 in
      let v2 = (* semgrep_metavariable *) token env v2 in
      let v3 = List.map (map_attribute env) v3 in
      let v4 = (* ">" *) token env v4 in
      todo env (v1, v2, v3, v4)
  | `LT_start_tag_name_rep_attr_GT (v1, v2, v3, v4) ->
      let v1 = (* "<" *) token env v1 in
      let v2 = (* start_tag_name *) token env v2 in
      let v3 = List.map (map_attribute env) v3 in
      let v4 = (* ">" *) token env v4 in
      todo env (v1, v2, v3, v4)
  )

let map_style_element (env : env) ((v1, v2, v3) : CST.style_element) =
  let v1 = map_style_start_tag env v1 in
  let v2 =
    (match v2 with
    | Some tok -> (* raw_text *) token env tok
    | None -> todo env ())
  in
  let v3 = map_end_tag env v3 in
  todo env (v1, v2, v3)

let rec map_element (env : env) (x : CST.element) =
  (match x with
  | `Start_tag_rep_node_choice_end_tag (v1, v2, v3) ->
      let v1 = map_start_tag env v1 in
      let v2 = map_fragment env v2 in
      let v3 =
        (match v3 with
        | `End_tag x -> map_end_tag env x
        | `Impl_end_tag tok -> (* implicit_end_tag *) token env tok
        )
      in
      todo env (v1, v2, v3)
  | `Self_clos_tag (v1, v2, v3, v4) ->
      let v1 = (* "<" *) token env v1 in
      let v2 = (* start_tag_name *) token env v2 in
      let v3 = List.map (map_attribute env) v3 in
      let v4 = (* "/>" *) token env v4 in
      todo env (v1, v2, v3, v4)
  )

and map_fragment (env : env) (xs : CST.fragment) =
  List.map (map_node env) xs

and map_node (env : env) (x : CST.node) =
  (match x with
  | `Xmld (v1, v2, v3) ->
      let v1 = (* "<?xml" *) token env v1 in
      let v2 = List.map (map_attribute env) v2 in
      let v3 = (* "?>" *) token env v3 in
      todo env (v1, v2, v3)
  | `Choice_doct_ x ->
      (match x with
      | `Doct_ x -> map_doctype_ env x
      | `Text tok ->
          (* pattern [^<>\s]([^<>]*[^<>\s])? *) token env tok
      | `Elem x -> map_element env x
      | `Script_elem x -> map_script_element env x
      | `Style_elem x -> map_style_element env x
      | `Errons_end_tag x -> map_erroneous_end_tag env x
      )
  )
