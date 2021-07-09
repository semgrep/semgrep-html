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

let map_semgrep_metavariable (env : env) (tok : CST.semgrep_metavariable) =
  token env tok (* semgrep_metavariable *)

let map_script_start_tag_name (env : env) (tok : CST.script_start_tag_name) =
  token env tok (* script_start_tag_name *)

let map_attribute_name (env : env) (tok : CST.attribute_name) =
  token env tok (* pattern "[^<>\"'/=\\s]+" *)

let map_style_start_tag_name (env : env) (tok : CST.style_start_tag_name) =
  token env tok (* style_start_tag_name *)

let map_start_tag_name (env : env) (tok : CST.start_tag_name) =
  token env tok (* start_tag_name *)

let map_doctype (env : env) (tok : CST.doctype) =
  token env tok (* pattern [Dd][Oo][Cc][Tt][Yy][Pp][Ee] *)

let map_raw_text (env : env) (tok : CST.raw_text) =
  token env tok (* raw_text *)

let map_pat_98d585a (env : env) (tok : CST.pat_98d585a) =
  token env tok (* pattern "[^\"]+" *)

let map_erroneous_end_tag_name (env : env) (tok : CST.erroneous_end_tag_name) =
  token env tok (* erroneous_end_tag_name *)

let map_implicit_end_tag (env : env) (tok : CST.implicit_end_tag) =
  token env tok (* implicit_end_tag *)

let map_pat_03aa317 (env : env) (tok : CST.pat_03aa317) =
  token env tok (* pattern [^>]+ *)

let map_pat_58fbb2e (env : env) (tok : CST.pat_58fbb2e) =
  token env tok (* pattern "[^']+" *)

let map_end_tag_name (env : env) (tok : CST.end_tag_name) =
  token env tok (* end_tag_name *)

let map_text (env : env) (tok : CST.text) =
  token env tok (* pattern [^<>]+ *)

let map_attribute_value (env : env) (tok : CST.attribute_value) =
  token env tok (* pattern "[^<>\"'=\\s]+" *)

let map_semgrep_end_tag (env : env) ((v1, v2, v3) : CST.semgrep_end_tag) =
  let v1 = token env v1 (* "</" *) in
  let v2 = token env v2 (* semgrep_metavariable *) in
  let v3 = token env v3 (* ">" *) in
  todo env (v1, v2, v3)

let map_quoted_attribute_value (env : env) (x : CST.quoted_attribute_value) =
  (match x with
  | `SQUOT_opt_pat_58fbb2e_SQUOT (v1, v2, v3) ->
      let v1 = token env v1 (* "'" *) in
      let v2 =
        (match v2 with
        | Some tok -> token env tok (* pattern "[^']+" *)
        | None -> todo env ())
      in
      let v3 = token env v3 (* "'" *) in
      todo env (v1, v2, v3)
  | `DQUOT_opt_pat_98d585a_DQUOT (v1, v2, v3) ->
      let v1 = token env v1 (* "\"" *) in
      let v2 =
        (match v2 with
        | Some tok -> token env tok (* pattern "[^\"]+" *)
        | None -> todo env ())
      in
      let v3 = token env v3 (* "\"" *) in
      todo env (v1, v2, v3)
  )

let map_end_tag (env : env) ((v1, v2, v3) : CST.end_tag) =
  let v1 = token env v1 (* "</" *) in
  let v2 = token env v2 (* end_tag_name *) in
  let v3 = token env v3 (* ">" *) in
  todo env (v1, v2, v3)

let map_attribute (env : env) ((v1, v2) : CST.attribute) =
  let v1 = token env v1 (* pattern "[^<>\"'/=\\s]+" *) in
  let v2 =
    (match v2 with
    | Some (v1, v2) ->
        let v1 = token env v1 (* "=" *) in
        let v2 =
          (match v2 with
          | `Attr_value tok ->
              token env tok (* pattern "[^<>\"'=\\s]+" *)
          | `Quoted_attr_value x -> map_quoted_attribute_value env x
          )
        in
        todo env (v1, v2)
    | None -> todo env ())
  in
  todo env (v1, v2)

let map_script_start_tag (env : env) ((v1, v2, v3, v4) : CST.script_start_tag) =
  let v1 = token env v1 (* "<" *) in
  let v2 = token env v2 (* script_start_tag_name *) in
  let v3 = List.map (map_attribute env) v3 in
  let v4 = token env v4 (* ">" *) in
  todo env (v1, v2, v3, v4)

let map_semgrep_start_tag (env : env) ((v1, v2, v3, v4) : CST.semgrep_start_tag) =
  let v1 = token env v1 (* "<" *) in
  let v2 = token env v2 (* semgrep_metavariable *) in
  let v3 = List.map (map_attribute env) v3 in
  let v4 = token env v4 (* "/>" *) in
  todo env (v1, v2, v3, v4)

let map_start_tag (env : env) ((v1, v2, v3, v4) : CST.start_tag) =
  let v1 = token env v1 (* "<" *) in
  let v2 = token env v2 (* start_tag_name *) in
  let v3 = List.map (map_attribute env) v3 in
  let v4 = token env v4 (* ">" *) in
  todo env (v1, v2, v3, v4)

let map_style_start_tag (env : env) ((v1, v2, v3, v4) : CST.style_start_tag) =
  let v1 = token env v1 (* "<" *) in
  let v2 = token env v2 (* style_start_tag_name *) in
  let v3 = List.map (map_attribute env) v3 in
  let v4 = token env v4 (* ">" *) in
  todo env (v1, v2, v3, v4)

let rec map_element (env : env) (x : CST.element) =
  (match x with
  | `Semg_elem (v1, v2, v3) ->
      let v1 = map_semgrep_start_tag env v1 in
      let v2 = map_fragment env v2 in
      let v3 = map_semgrep_end_tag env v3 in
      todo env (v1, v2, v3)
  | `Start_tag_rep_node_choice_end_tag (v1, v2, v3) ->
      let v1 = map_start_tag env v1 in
      let v2 = map_fragment env v2 in
      let v3 =
        (match v3 with
        | `End_tag x -> map_end_tag env x
        | `Impl_end_tag tok -> token env tok (* implicit_end_tag *)
        )
      in
      todo env (v1, v2, v3)
  | `Self_clos_tag (v1, v2, v3, v4) ->
      let v1 = token env v1 (* "<" *) in
      let v2 = token env v2 (* start_tag_name *) in
      let v3 = List.map (map_attribute env) v3 in
      let v4 = token env v4 (* "/>" *) in
      todo env (v1, v2, v3, v4)
  )

and map_fragment (env : env) (xs : CST.fragment) =
  List.map (map_node env) xs

and map_node (env : env) (x : CST.node) =
  (match x with
  | `Doct_ (v1, v2, v3, v4) ->
      let v1 = token env v1 (* "<!" *) in
      let v2 =
        token env v2 (* pattern [Dd][Oo][Cc][Tt][Yy][Pp][Ee] *)
      in
      let v3 = token env v3 (* pattern [^>]+ *) in
      let v4 = token env v4 (* ">" *) in
      todo env (v1, v2, v3, v4)
  | `Text tok -> token env tok (* pattern [^<>]+ *)
  | `Elem x -> map_element env x
  | `Script_elem (v1, v2, v3) ->
      let v1 = map_script_start_tag env v1 in
      let v2 =
        (match v2 with
        | Some tok -> token env tok (* raw_text *)
        | None -> todo env ())
      in
      let v3 = map_end_tag env v3 in
      todo env (v1, v2, v3)
  | `Style_elem (v1, v2, v3) ->
      let v1 = map_style_start_tag env v1 in
      let v2 =
        (match v2 with
        | Some tok -> token env tok (* raw_text *)
        | None -> todo env ())
      in
      let v3 = map_end_tag env v3 in
      todo env (v1, v2, v3)
  | `Errons_end_tag (v1, v2, v3) ->
      let v1 = token env v1 (* "</" *) in
      let v2 = token env v2 (* erroneous_end_tag_name *) in
      let v3 = token env v3 (* ">" *) in
      todo env (v1, v2, v3)
  )
