在您编译并第一次运行后 您可能需要配置您的业务逻辑 或者配置插件以使用GUI界面<br>
那么您可以选择两个文件进行配置.<br>
请将plugin.json修改为<br>
{<br>
    "Enable STL" : "flase",<br>
    "Port" : 25565,<br>
    "plugin"[<br>
        {<br>
            "Name" : "",<br>
            "AbilityName" : "",//功能名字<br>
            "LOTRRCAbility" : 1//是否具有长时间运行等待并且快速响应能力<br>
            "Path" : ""<br>
        }<br>
    ]<br>
}<br>
将extension.json改为<br>
{<br>
    "Enable STL" : "true",<br>
    "Port" : 25566,<br>
    "plugin"[<br>
        {<br>
            "Name" : "",<br>
            "Path" : ""<br>
        }<br>
    ]<br>
}<br>
您可能会问: 区别在哪里？<br>
原因是extension为扩展性插件的json 是随着服务端的启动而启动的.plugin为您的主要业务只有FN不能相同,当您需要安装extension时,可能需要修改源码.
