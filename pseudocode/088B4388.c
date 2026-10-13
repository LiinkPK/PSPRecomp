/* Entry 0x088B4388 | file offset 0x000B1360 | FUN_088b4388 | bytes 228 */

int FUN_088b4388(undefined4 param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,
                int param_7,int param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar5 = 0;
  iVar4 = -1;
  if (0 < param_5) {
    do {
      cVar1 = *(char *)(*param_4 + 0x16);
      if (((cVar1 == '\x02') || (cVar1 == '\x03')) || (bVar2 = false, cVar1 == '\x04')) {
        bVar2 = true;
      }
      if (((bVar2) && (*(char *)((int)param_4 + 7) == '\0')) &&
         (param_6 + (short)param_4[1] <= param_7)) {
        iVar6 = (int)*(char *)((int)param_4 + 6);
        if ((iVar4 <= iVar6) && (iVar6 <= param_8)) {
          if (iVar4 < iVar6) {
            iVar5 = 0;
            iVar4 = iVar6;
          }
          if (iVar5 < param_3) {
            *(int *)(param_2 + iVar5 * 4) = iVar3;
            iVar5 = iVar5 + 1;
          }
        }
      }
      iVar3 = iVar3 + 1;
      param_4 = param_4 + 2;
    } while (iVar3 < param_5);
  }
  return iVar5;
}

