# Contributing

We at GDSC BU understand the significance of open-source in our lives and we intend to promote it further by encouraging students to contribute and learn in the process.

The following is a set of guidelines for contributing to this repository.

## Pull requests

We welcome contributions in the form of pull-requests. 

### How to PR

The following are the basic steps you need to follow.

#### (1) Fork the repository

![](https://syed.is-from.space/r/codeheist_fork.png)

> Now you should be brought to the github repo: `YourUsername/Code-Heist`

#### (2) Make changes

We recommend command line method to maximize learning.

##### Using the github web-based editor

1. Navigate to directory tree and locate the file you intend to edit.

2. Create a new branch and switch to it.
    ![](https://syed.is-from.space/r/codeheist_gbranch.png)

2. Click the edit button and make changes.
    ![](https://syed.is-from.space/r/codeheist-gedit.png)

3. Commit your changes. Taking [conventions](#conventions) into consideration.
    ![](https://syed.is-from.space/r/codeheist-gcommit.png)

##### Using the command line

1. Clone your forked repository locally using the `git clone` command
    ![](https://syed.is-from.space/r/codeheist-clone.png)

2. Create a new branch and switch to it.
    ![](https://syed.is-from.space/r/codeheist_branch.png)

3. Make your changes.

4. Stage your changed files.
    ![](https://syed.is-from.space/r/codeheist_stage.png)
    
5. Commit your changes. Taking [conventions](#conventions) into consideration.
    ![](https://syed.is-from.space/r/codeheist_commit.png)

    > To commit without description, use the `-m` flag: `git commit -m "[Fix] Patch xyz bug"`

#### (3) Open a new PR

Once you commit your changes, you will see something like this:

![](https://syed.is-from.space/r/ch_pr.png)

Further, make sure the comment attached to it is sensible and follows the conventions.

Proceed once ready.

![](https://syed.is-from.space/r/ch_pr-final.png)

> This can only be done through the github webpage.

### Actions

We accept PR's tackling a few set of actions.

1. Add solutions to problems in the programming language of your choice.

2. Update an existing solution to either improve readablity, fix bugs or even rewrite them for maximum efficiency.

3. Updating and improving the documentation.

## Conventions

We enforce the following conventions for pull requests, commits and code.

### Git commit messages

The commit message should roughly follow the following structure:

```sh
[Action] concise message
```

Where,

Action could be one of the following:

- [Fix]
- [Add]
- [Remove]
- [Update]
- [Doc]

#### Things to remember

- Use the present tense ("Add solution" not "Added solution")
- Limit the main message to 72 characters or less.
- Don't add a dot (`.`) ending the message.

#### Example

Take adding a new solution as an example:

```sh
[Add] Rust solution for contest1::div1::hostages
```

## Note

- Submitting a PR doesn't necessarily imply it will be merged.
- This guide might be updated without prior notice. Please read every time you contribute.
