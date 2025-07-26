# tree-sitter-piglet

Tree sitter grammar for Piglet

# ABI

At the time of writing, emacs only support ABI 14 (checked on Emacs 31.0.50), so
make sure to use the pinned tree-sitter-cli version shown below.

# Commands

```
pnpm install -g tree-sitter-cli@0.24.7

tree-sitter generate

echo '(let [foo 123] (foo bar))' > example-file
tree-sitter parse example-file

tree-sitter parse <<< '@foo'

tree-sitter build
tree-sitter build --wasm
tree-sitter test
```
