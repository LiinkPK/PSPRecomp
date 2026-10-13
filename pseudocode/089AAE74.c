/* Entry 0x089AAE74 | file offset 0x001A7E4C | FUN_089aae74 | bytes 244 */

int FUN_089aae74(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 local_30 [16];
  
  iVar2 = FUN_089ab30c();
  if ((iVar2 == 0) && (iVar2 = FUN_089ab15c(param_1 + param_4,param_2 + param_5,0x400), iVar2 == 0))
  {
    iVar2 = 0;
    do {
      if (param_4 <= param_3) {
        local_30[iVar2] = 0;
        iVar2 = FUN_089aada0(local_30);
        if (iVar2 != 1) {
          return -1;
        }
        iVar2 = FUN_08934924(local_30);
        if (iVar2 < 1000) {
          return iVar2;
        }
        return -1;
      }
      puVar4 = (undefined1 *)(param_1 + param_3);
      puVar3 = local_30 + iVar2;
      param_3 = param_3 + 1;
      bVar1 = iVar2 < 0x10;
      iVar2 = iVar2 + 1;
      *puVar3 = *puVar4;
    } while (bVar1);
  }
  return -1;
}

