# tree-sitter-ledger

A [ledger](https://www.ledger-cli.org/) parser built with [tree-sitter](https://tree-sitter.github.io/tree-sitter/).

## Contributing

Only the Nix toolchain is supported to get the `tree-sitter` binary. You can add it to your path by running `nix develop`. The NPM toolchain is best-effort only and not actively maintained.

Regardless, I personally regenerate the code after every merged PR to prevent the risk of a contributor lacing malicious code into the generated output.

## Note for nvim-treesitter users

`negative_quantity` is exposed by tree-sitter-ledger, but not treated specially in nvim-treesitter. You can add special highlighting for it (e.g. to highlight negative quantities in red) by runnning `:TSEditQueryUserAfter` and filling in something like:

```scm
;; extends
((negative_quantity) @some_capture)
```

where `@some_capture` should map to some highlight group in your colorscheme.

## Note for integration maintainers

I also maintain the ledger queries in [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter/tree/master/queries/ledger). Consider consulting them for hints about what tree-sitter-ledger exposes.
