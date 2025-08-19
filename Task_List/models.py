from django.db import models

# Create your models here.
class Task_Lists(models.Model):
    task_id = models.IntegerField(primary_key=1,verbose_name='任务ID')
    task_code = models.CharField(max_length=30,verbose_name='任务工单号')
    task_title = models.CharField(max_length=50,blank=True,verbose_name='任务标题')
    task_level = models.CharField(max_length=30,blank=True,verbose_name='任务重要程度')
    task_status = models.CharField(max_length=30,blank=True,verbose_name='任务状态')
    task_time = models.DateTimeField(blank=True,verbose_name='任务截止日期')
    task_describe = models.TextField(blank=True,verbose_name='任务详情')

    class Meta:
        verbose_name = '任务记录'
        verbose_name_plural = '任务记录-Task_list'
