from haystack import indexes
from .models import *


class MyEventIndex(indexes.SearchIndex, indexes.Indexable):
    text = indexes.CharField(document=True, use_template=True)

    def get_model(self):
        return My_Event_Logs

    def index_queryset(self, using=None):
        return self.get_model().objects.all()