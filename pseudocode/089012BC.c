/* Entry 0x089012BC | file offset 0x000FE294 | FUN_089012bc | bytes 324 */

int FUN_089012bc(int *param_1,int param_2,undefined4 param_3,int param_4,char param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  
  iVar1 = FUN_088b37c0(param_3);
  iVar6 = 0;
  if (iVar1 != 0) {
    iVar4 = 0;
    psVar5 = (short *)(iVar1 + 0x16);
    do {
      if (-1 < *psVar5) {
        iVar1 = FUN_088b36fc();
        if ((((param_5 != '\x01') ||
             (uVar3 = (uint)*(short *)(*(int *)(iVar1 + 0xc) + 2), (int)uVar3 < 0)) ||
            ((*(uint *)(DAT_089d726c + (uVar3 >> 5) * 4) & 1 << (uVar3 & 0x1f)) != 0)) &&
           ((iVar2 = (int)*(char *)(*(int *)(iVar1 + 0xc) + 9), iVar2 < 0 || (param_4 <= iVar2)))) {
          if (param_2 <= iVar6) {
            return iVar6;
          }
          *param_1 = iVar1;
          iVar6 = iVar6 + 1;
          param_1 = param_1 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      psVar5 = psVar5 + 1;
    } while (iVar4 < 3);
  }
  return iVar6;
}

