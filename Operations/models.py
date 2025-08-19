from django.db import models

# Create your models here.
class Backup_Restore_Operation(models.Model):
    backup_id = models.IntegerField(primary_key=1,verbose_name='备份任务ID')
    backup_db_type = models.CharField(max_length=30,choices=[('A', 'Oracle'), ('B', 'MySQL'), ('C', 'Redis'), ('D', 'PostgreSQL'), ('E', 'MangoDB'), ('F', 'Cassandra')],verbose_name='数据库类型')
    backup_db_version = models.CharField(max_length=30,verbose_name='数据库版本')
    backup_instance = models.CharField(max_length=30,verbose_name='实例名')
    backup_db_name = models.CharField(max_length=30,verbose_name='数据库名')
    backup_tb_name = models.CharField(max_length=30,verbose_name='表名')
    backup_type = models.CharField(max_length=30,verbose_name='备份类型')
    backup_way = models.CharField(max_length=30,verbose_name='备份方式')
    backup_frequency = models.CharField(max_length=30,verbose_name='备份频率')
    backup_create_time = models.DateTimeField(blank=True,verbose_name='备份创建时间')
    backup_path = models.URLField(blank=True,verbose_name='备份路径')
	
    class Meta:
        verbose_name = '备份&恢复'
        verbose_name_plural = '备份&恢复-BackUp_Restore'

class Maintenances_Operations(models.Model):
    m_id = models.IntegerField(primary_key=1,verbose_name='事件记录ID')
    m_db_type = models.CharField(max_length=30,verbose_name='事件数据库类型')
    m_instance = models.CharField(max_length=30,verbose_name='事件实例名')
    m_instance = models.CharField(max_length=30,verbose_name='事件类型')
    m_operation_type = models.CharField(max_length=30,verbose_name='事件操作类型')
    m_operation_time = models.DateTimeField(blank=True,verbose_name='事件起止时间')
    m_alter_status = models.CharField(max_length=30,choices=[('A', 'Mute'), ('B', 'Unmute')],verbose_name='监控告警状态')
    m_operation = models.CharField(max_length=30,verbose_name='操作')
	
    class Meta:
        verbose_name = '维护事件处理'
        verbose_name_plural = '维护事件处理-Maintenances_Operation'