

```
pnpm install -g tree-sitter-cli

tree-sitter generate

echo '(let [foo 123] (foo bar))' > example-file
tree-sitter parse example-file

tree-sitter parse <<< '@foo'

tree-sitter build
tree-sitter build --wasm
tree-sitter test
```
