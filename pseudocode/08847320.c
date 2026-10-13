/* Entry 0x08847320 | file offset 0x000442F8 | FUN_08847320 | bytes 160 */

void FUN_08847320(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 0;
  pbVar2 = param_1;
  do {
    if (*pbVar2 == param_3) {
      return;
    }
    iVar3 = iVar3 + 1;
    pbVar2 = pbVar2 + 2;
  } while (iVar3 < 0x10);
  iVar3 = 0;
  do {
    if (*param_1 == 0xff) {
      *param_1 = (byte)param_3;
      bVar1 = FUN_0886cc38(*(undefined4 *)(param_2 + 0x394));
      param_1[1] = bVar1;
      return;
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 2;
  } while (iVar3 < 0x10);
  return;
}

