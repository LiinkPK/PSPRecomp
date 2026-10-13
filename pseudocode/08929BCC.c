/* Entry 0x08929BCC | file offset 0x00126BA4 | FUN_08929bcc | bytes 256 */

int FUN_08929bcc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 0;
  iVar5 = *(int *)(DAT_089d76e8 + 0xc);
  iVar4 = 0;
  if (0 < iVar5) {
    iVar3 = 0;
    piVar2 = param_5;
    do {
      if (param_2 <= iVar4) {
        return iVar4;
      }
      FUN_08929afc(param_1,DAT_089d76f0 + iVar3,param_3,param_4);
      if (param_5 != (int *)0x0) {
        *piVar2 = iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 0x154;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + 0x13c;
    } while (iVar1 < iVar5);
  }
  return iVar4;
}

