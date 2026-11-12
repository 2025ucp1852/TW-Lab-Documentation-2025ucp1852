# Git and GitHub Documentation - TW Lab 2026

## 1. Introduction

Git is a distributed version control system used to track changes in files and manage source code. It allows developers to maintain different versions of a project and collaborate efficiently.

GitHub is a cloud-based platform that hosts Git repositories. It provides tools for sharing code, managing projects, reviewing changes, and collaborating with other developers.

Git and GitHub are widely used in software development and technical documentation.

## 2. Learning Objectives

- Understand the concepts of Git and GitHub.
- Learn how to install and configure Git.
- Create and initialize a local Git repository.
- Track changes using Git commands.
- Create commits to save project versions.
- Connect a local repository to GitHub.
- Upload and download project changes.
- Understand branches and collaboration.

## 3. Git and GitHub

### 3.1 Git

Git is a version control system that records changes made to files. It helps developers maintain project history and restore earlier versions when required.

### 3.2 GitHub

GitHub is an online platform for hosting Git repositories. It allows users to store projects remotely and collaborate with others.

### 3.3 Difference Between Git and GitHub

| Git | GitHub |
|---|---|
| Version control system. | Online repository hosting platform. |
| Works locally on a computer. | Accessible through the internet. |
| Tracks changes in files. | Stores and shares Git repositories. |
| Supports commits and branches. | Supports collaboration and pull requests. |

## 4. Installing Git

Git can be installed on Windows by downloading the installer from the official website.

Official website: https://git-scm.com/

After installation, open Command Prompt and check the installed version:

```cmd
git --version
```

This command displays the installed Git version.

## 5. Configuring Git

Before using Git, configure the username and email address.

```cmd
git config --global user.name "Your Name"
git config --global user.email "your-email@example.com"
```

To view the configuration:

```cmd
git config --list
```

These settings identify the author of commits.

## 6. Creating a Local Repository

Create a project folder and navigate into it.

```cmd
mkdir Git-Practice
cd Git-Practice
```

Initialize a Git repository:

```cmd
git init
```

This creates a hidden `.git` directory that stores repository information and version history.

## 7. Tracking Files

Create a file named `README.md` and add some project information.

Check the repository status:

```cmd
git status
```

Add the file to the staging area:

```cmd
git add README.md
```

To stage all modified and new files:

```cmd
git add .
```

The staging area contains changes selected for the next commit.

## 8. Creating Commits

A commit saves a snapshot of the staged changes.

```cmd
git commit -m "Initial commit"
```

To view the commit history:

```cmd
git log
```

To display a shorter commit history:

```cmd
git log --oneline
```

Commits help maintain a record of project development.

## 9. Connecting Git to GitHub

Create a new repository on GitHub.

Copy its repository URL and connect it to the local repository:

```cmd
git remote add origin https://github.com/username/repository-name.git
```

Check the remote connection:

```cmd
git remote -v
```

The remote named `origin` represents the GitHub repository.

## 10. Uploading and Downloading Changes

### 10.1 Push

Upload local commits to GitHub:

```cmd
git push -u origin main
```

For subsequent uploads:

```cmd
git push origin main
```

### 10.2 Pull

Download and integrate changes from GitHub:

```cmd
git pull origin main
```

### 10.3 Clone

Download an existing GitHub repository:

```cmd
git clone https://github.com/username/repository-name.git
```

These commands help synchronize local and remote repositories.

## 11. Branching in Git

A branch allows developers to work on a separate version of a project.

Create a new branch:

```cmd
git branch feature
```

Switch to the branch:

```cmd
git switch feature
```

Create and switch to a branch in one command:

```cmd
git switch -c feature
```

List available branches:

```cmd
git branch
```

Merge a branch into the current branch:

```cmd
git merge feature
```

Branches support parallel development without directly changing the main branch.

## 12. Useful Git Commands

| Command | Purpose |
|---|---|
| `git init` | Initialize a repository. |
| `git status` | Display repository status. |
| `git add .` | Stage changes. |
| `git commit -m "message"` | Save staged changes. |
| `git log` | Display commit history. |
| `git diff` | Show unstaged changes. |
| `git branch` | List branches. |
| `git switch` | Switch branches. |
| `git merge` | Merge branches. |
| `git remote -v` | Display remote repositories. |
| `git push` | Upload commits. |
| `git pull` | Download and integrate changes. |
| `git clone` | Copy a remote repository locally. |

## 13. Practical Applications

Git and GitHub are useful for:

- Managing source-code versions.
- Maintaining project history.
- Collaborating on software projects.
- Sharing technical documentation.
- Managing academic and programming assignments.
- Tracking changes and recovering earlier versions.

## 14. Conclusion

Git and GitHub provide an effective way to manage project files and collaborate on development work. Git tracks changes and maintains version history, while GitHub provides an online platform for storing and sharing repositories. Learning these tools is an important skill for software development and technical documentation.