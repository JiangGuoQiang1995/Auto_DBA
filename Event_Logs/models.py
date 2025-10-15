from django.db import models
from DjangoUeditor.models import UEditorField
from django.utils import timezone

# Create your models here.
class My_Event_Logs(models.Model):
    event_id = models.IntegerField(primary_key=1,verbose_name='故障ID')
    event_code = models.CharField(max_length=30,verbose_name='故障编号')
    event_title = models.CharField(max_length=50,verbose_name='故障标题')
    event_describe = UEditorField(
        u'描述',                               # 定义该字段在后台管理系统中的别名
        default = '',
        width = 1000,                          # 在后台管理系统中的宽度1000像素
        height = 300,                          # 在后台管理系统中的高度300像素
                                               # imagePath和filePath分别用来指明用户上传的图像和文件的存储目录（最终还是依赖于项目配置文件settings.py中的MEDIA_URL和MEDIA_ROOT）
        imagePath = 'event_log/images/',
        filePath = 'event_log/files/',
        upload_settings={"imageMaxSize": 1204000}  # 限制图片大小(1.2MB)
    )
    event_level = models.CharField(max_length=30,blank=True,verbose_name='故障评级')
    event_model = models.CharField(max_length=30,blank=True,choices=[('A', 'MySQL'), ('B', 'Oracle'), ('C', 'PostgreSQL'), ('D', 'Redis'),('E', 'Cassandra'), ('F', 'Others')],verbose_name='故障模块')
    event_range = models.CharField(max_length=50,blank=True,verbose_name='故障影响范围')
    event_time = models.DateTimeField(blank=True,default=timezone.now,verbose_name='故障起止时间')
    event_reason = models.TextField(blank=True,verbose_name='故障原因')
    event_solution = models.TextField(blank=True,verbose_name='解决措施')
    views = models.PositiveIntegerField('浏览量', default=0)

    # def __str__(self)用来配置后台管理系统中故障列表里每条记录显示的名称
    def __str__(self):
        return self.event_title

    # Meta类用来声明模型数据的排序方式已经模型在后台管理系统中的别名
    class Meta:
        verbose_name = '故障记录'
        verbose_name_plural = '故障记录-Event_log'
        ordering = ('-event_id',)
        # ordering设置在后台管理系统中的排序