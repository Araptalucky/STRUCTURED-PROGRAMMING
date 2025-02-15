def save_tasks(tasks):
    with open("tasks.txt", "w") as file:
        for task in tasks:
            file.write(task + "\n")

def load_tasks():
    try:
        with open("tasks.txt", "r") as file:
            return [line.strip() for line in file.readlines()]
    except FileNotFoundError:
        return []

tasks = load_tasks()

while True:
    print("\nTo-Do List:")
    for idx, task in enumerate(tasks, 1):
        print(f"{idx}. {task}")
    
    action = input("\nType 'add' to add a task, 'done' to remove, or 'exit' to quit: ").lower()
    
    if action == "add":
        task = input("Enter new task: ")
        tasks.append(task)
        save_tasks(tasks)
    elif action == "done":
        task_index = int(input("Enter task number to remove: ")) - 1
        if 0 <= task_index < len(tasks):
            tasks.pop(task_index)
            save_tasks(tasks)
    elif action == "exit":
        break
