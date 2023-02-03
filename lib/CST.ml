(* Generated by ocaml-tree-sitter. *)
(*
   html grammar

   entrypoint: fragment
*)

open! Sexplib.Conv
open Tree_sitter_run

type start_tag_name = Token.t
[@@deriving sexp_of]

type doctype = Token.t (* pattern [Dd][Oo][Cc][Tt][Yy][Pp][Ee] *)
[@@deriving sexp_of]

type pat_98d585a = Token.t (* pattern "[^\"]+" *)
[@@deriving sexp_of]

type pat_03aa317 = Token.t (* pattern [^>]+ *)
[@@deriving sexp_of]

type end_tag_name = Token.t
[@@deriving sexp_of]

type attribute_name = Token.t (* pattern "[^<>\"'/=\\s]+" *)
[@@deriving sexp_of]

type raw_text = Token.t
[@@deriving sexp_of]

type implicit_end_tag = Token.t
[@@deriving sexp_of]

type pat_58fbb2e = Token.t (* pattern "[^']+" *)
[@@deriving sexp_of]

type script_start_tag_name = Token.t
[@@deriving sexp_of]

type semgrep_metavariable = Token.t
[@@deriving sexp_of]

type style_start_tag_name = Token.t
[@@deriving sexp_of]

type erroneous_end_tag_name = Token.t
[@@deriving sexp_of]

type text = Token.t (* pattern [^<>\s]([^<>]*[^<>\s])? *)
[@@deriving sexp_of]

type attribute_value = Token.t (* pattern "[^<>\"'=\\s]+" *)
[@@deriving sexp_of]

type doctype_ = (
    Token.t (* "<!" *) * doctype (*tok*) * pat_03aa317 * Token.t (* ">" *)
)
[@@deriving sexp_of]

type quoted_attribute_value = [
    `SQUOT_opt_pat_58fbb2e_SQUOT of (
        Token.t (* "'" *)
      * pat_58fbb2e option
      * Token.t (* "'" *)
    )
  | `DQUOT_opt_pat_98d585a_DQUOT of (
        Token.t (* "\"" *)
      * pat_98d585a option
      * Token.t (* "\"" *)
    )
]
[@@deriving sexp_of]

type erroneous_end_tag = (
    Token.t (* "</" *) * erroneous_end_tag_name (*tok*) * Token.t (* ">" *)
)
[@@deriving sexp_of]

type attribute = (
    attribute_name (*tok*)
  * (
        Token.t (* "=" *)
      * [
            `Attr_value of attribute_value (*tok*)
          | `Quoted_attr_value of quoted_attribute_value
        ]
    )
      option
)
[@@deriving sexp_of]

type end_tag = [
    `Semg_end_tag of (
        Token.t (* "</" *) * semgrep_metavariable (*tok*) * Token.t (* ">" *)
    )
  | `LTSLASH_end_tag_name_GT of (
        Token.t (* "</" *) * end_tag_name (*tok*) * Token.t (* ">" *)
    )
]
[@@deriving sexp_of]

type script_start_tag = (
    Token.t (* "<" *)
  * script_start_tag_name (*tok*)
  * attribute list (* zero or more *)
  * Token.t (* ">" *)
)
[@@deriving sexp_of]

type style_start_tag = (
    Token.t (* "<" *)
  * style_start_tag_name (*tok*)
  * attribute list (* zero or more *)
  * Token.t (* ">" *)
)
[@@deriving sexp_of]

type script_element = (script_start_tag * raw_text (*tok*) option * end_tag)
[@@deriving sexp_of]

type start_tag = [
    `Semg_start_tag of (
        Token.t (* "<" *)
      * semgrep_metavariable (*tok*)
      * attribute list (* zero or more *)
      * Token.t (* ">" *)
    )
  | `LT_start_tag_name_rep_attr_GT of (
        Token.t (* "<" *)
      * start_tag_name (*tok*)
      * attribute list (* zero or more *)
      * Token.t (* ">" *)
    )
]
[@@deriving sexp_of]

type style_element = (style_start_tag * raw_text (*tok*) option * end_tag)
[@@deriving sexp_of]

type element = [
    `Start_tag_rep_node_choice_end_tag of (
        start_tag
      * fragment
      * [ `End_tag of end_tag | `Impl_end_tag of implicit_end_tag (*tok*) ]
    )
  | `Self_clos_tag of (
        Token.t (* "<" *)
      * start_tag_name (*tok*)
      * attribute list (* zero or more *)
      * Token.t (* "/>" *)
    )
]

and fragment = node list (* zero or more *)

and node = [
    `Xmld of (
        Token.t (* "<?xml" *)
      * attribute list (* zero or more *)
      * Token.t (* "?>" *)
    )
  | `Choice_doct_ of [
        `Doct_ of doctype_
      | `Text of text (*tok*)
      | `Elem of element
      | `Script_elem of script_element
      | `Style_elem of style_element
      | `Errons_end_tag of erroneous_end_tag
    ]
]
[@@deriving sexp_of]

type comment (* inlined *) = Token.t
[@@deriving sexp_of]

type semgrep_end_tag (* inlined *) = (
    Token.t (* "</" *) * semgrep_metavariable (*tok*) * Token.t (* ">" *)
)
[@@deriving sexp_of]

type xmldoctype (* inlined *) = (
    Token.t (* "<?xml" *)
  * attribute list (* zero or more *)
  * Token.t (* "?>" *)
)
[@@deriving sexp_of]

type semgrep_start_tag (* inlined *) = (
    Token.t (* "<" *)
  * semgrep_metavariable (*tok*)
  * attribute list (* zero or more *)
  * Token.t (* ">" *)
)
[@@deriving sexp_of]

type self_closing_tag (* inlined *) = (
    Token.t (* "<" *)
  * start_tag_name (*tok*)
  * attribute list (* zero or more *)
  * Token.t (* "/>" *)
)
[@@deriving sexp_of]

let dump_tree root =
  sexp_of_fragment root
  |> Print_sexp.to_stdout
