# my decentrilized oasis 
## About the project structure
The structure of the project is an imitation of EOSIO itself...

## How to use
Generate the abi file of each smart contract and the set it.For this whole project, which is created under VSCode with macOS, you can follow the following steps:<br>
(1)Open this project with VSCode<br>
(2)shift+cmd+P ==> type “Tasks” and select “Configure Task“ ==> select “Create tasks.json file from template” ==》 “Others“<br>
you then can see our taks.json, it's been written, so you don't need to worry.<br>
(3) Set VSCode shortcuts for .vscode/script/compile.sh, build.sh & generate.sh:<br>
Preference ==> Keyboard Shortcuts ==> type in :<br>
```bash 
// Place your key bindings in this file to overwrite the defaults
[
    {
        "key":"cmd+e",
        "command":"workbench.action.task.runTask",
        "args":"CMake"
    },
    {
        "key":"cmd+r",
        "command":"workbench.action.task.runTask",
        "args":"Build"
    },
    {
        "key":"cmd+i",
        "command":"workbench.action.task.runTask",
        "args":"Generate ABI"
    },
]
```
then you can use ```cmd + i``` to autogenerate ABI files
use ```cmd + r``` to build.
then use ```cleos set contract ... ```in your shell to set smart contracts.

## About directories
/contracts is where to put new smart contracts in, for example Players and Marketplace.

## tips for myself
shift + cmd + K  : delete line in VSCode
