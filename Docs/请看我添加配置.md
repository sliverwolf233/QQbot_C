在您生成本项目之后 在运行目录生成了config.json<br>
请将json文件修改为:<br>
{<br>
    "databaseencryption" : "false",<br>
    "password" : "如果你在databaseseencryption设置为true 这里请设置密码",<br>
    "QQRC":[<br>
    {"AppID" :  "你在QQ开放平台的AppID",<br>
    "clientSecret" : "你在QQ开放平台的ClientSecret"},<br>
    "QBName" : "你在QQ开放平台备案的名字"<br>
    {<br>
    您如果需要同时运行多个bot 可以多添加几个配置.<br>
    }]<br>
}<br>
