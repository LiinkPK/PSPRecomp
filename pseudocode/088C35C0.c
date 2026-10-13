/* Entry 0x088C35C0 | file offset 0x000C0598 | FUN_088c35c0 | bytes 156 */

bool FUN_088c35c0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_088cb164(param_2,(int)(char)(&DAT_089cbb7a)[iVar2]);
    iVar1 = FUN_088b8498(iVar1 + 0x10);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + iVar1;
  } while (iVar2 < 0x1f);
  *param_1 = iVar3;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar3;
}

