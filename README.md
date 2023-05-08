# tree-sitter-ledger

A [ledger](https://www.ledger-cli.org/) parser built with
[tree-sitter](https://tree-sitter.github.io/tree-sitter/).

## Note for nvim-treesitter users

`negative_quantity` is exposed by tree-sitter-ledger, but not treated specially
in nvim-treesitter. You can add special highlighting for it (e.g. to highlight
negative quantities in red) by runnning `:TSEditQueryUserAfter` and filling in
something like:
```scm
;; extends
((negative_quantity) @some_capture)
```
where `@some_capture` should map to some highlight group in your colorscheme.

## Note for integration maintainers

I also maintain the ledger queries in
[nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter/tree/master/queries/ledger).
Consider consulting them for hints about what tree-sitter-ledger exposes.
