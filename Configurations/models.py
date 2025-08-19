from django.db import models

# Create your models here.
class Accounts_Configurations(models.Model):
    account_id = models.IntegerField(primary_key=1,verbose_name='账号Id')
    account_name = models.CharField(max_length=50,verbose_name='用户名')
    my_password = models.CharField(max_length=50,verbose_name='密码')
    account_mail = models.EmailField()
    account_authority = models.CharField(
        max_length=50,blank=True,
        choices=[('A', 'PL'), ('B', 'TL'), ('C', 'DBA'), ('D', 'TA')],
        verbose_name='权限代码')
    account_create_time = models.DateTimeField(blank=True,verbose_name='账号创建时间')
    account_update_time = models.DateTimeField(blank=True,verbose_name='账号更新时间')
    account_validity = models.IntegerField(max_length=10,blank=True,verbose_name='账号有效期')
    authority_code = models.CharField(max_length=50,blank=True,verbose_name='权限代码')

    class Meta:
        verbose_name = '账号&权限'
        verbose_name_plural = '账号配置'

class Databases_Configurations(models.Model):
    # 定义一个元组，作为DB_Type字段的choises属性传入
    DB_Choices = (
        ('Oracle','Oracle'),
        ('MySQL','MySQL'),
        ('PostgreSQL','PostgreSQL'),
        ('Redis','Redis'),
        ('Cassandra','Cassandra'),
        ('MongoDB','MongoDB'),
    )
    DB_id = models.IntegerField(primary_key=1,verbose_name='主键ID')
    DB_type = models.CharField(choices= DB_Choices,max_length=30,verbose_name='数据库类型')
    DB_name = models.CharField(max_length=50,verbose_name='数据库实例名称')
    DB_user = models.CharField(max_length=30,blank=True,verbose_name='数据库连接账号')
    DB_password = models.CharField(max_length=50,blank=True,verbose_name='密码')
    DB_port = models.IntegerField(max_length=10,blank=True,verbose_name='端口号')
    DB_platform = models.CharField(max_length=30,blank=True,verbose_name='平台类型')
    last_updatetime = models.DateTimeField(blank=True,verbose_name='上次更新时间')
    DB_endpoint = models.CharField(max_length=50,blank=True,verbose_name='数据库地址/终端节点')
    DB_access_cmd = models.CharField(max_length=50,blank=True,verbose_name='数据库快捷登录命令')

    class Meta:
        verbose_name = '数据库配置'
        verbose_name_plural = '数据库配置'

class Monitoring_Configurations(models.Model):
    DB_Choices = (
        ('Oracle','Oracle'),
        ('MySQL','MySQL'),
        ('PostgreSQL','PostgreSQL'),
        ('Redis','Redis'),
        ('Cassandra','Cassandra'),
        ('MongoDB','MongoDB'),
    )
    metric_id = models.IntegerField(primary_key=1,verbose_name='指标Id')
    metric_name = models.CharField(max_length=30,verbose_name='监控指标名')
    metric_db_type = models.CharField(choices= DB_Choices,max_length=30,verbose_name='数据库类型')
    metric_access = models.CharField(max_length=50,blank=True,verbose_name='指标获取方式')
    metric_instance = models.CharField(max_length=50,blank=True,verbose_name='监控目标')
    metric_threshold = models.IntegerField(max_length=10,blank=True,verbose_name='告警阈值')
    metric_frequency = models.CharField(max_length=30,blank=True,verbose_name='触发频率')
    metric_notification = models.CharField(max_length=30,blank=True,verbose_name='告警方式')

    class Meta:
        verbose_name = '监控指标配置'
        verbose_name_plural = '监控项配置'