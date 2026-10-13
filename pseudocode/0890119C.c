/* Entry 0x0890119C | file offset 0x000FE174 | FUN_0890119c | bytes 288 */

int FUN_0890119c(int *param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  iVar1 = FUN_088b37c0(param_3);
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar3 = 0;
    psVar5 = (short *)(iVar1 + 0x10);
    do {
      if ((-1 < *psVar5) &&
         (((iVar1 = FUN_088b3524(), param_4 != '\x01' ||
           (uVar2 = (uint)*(short *)(iVar1 + 4), (int)uVar2 < 0)) ||
          ((*(uint *)(DAT_089d726c + (uVar2 >> 5) * 4) & 1 << (uVar2 & 0x1f)) != 0)))) {
        if (param_2 <= iVar4) {
          return iVar4;
        }
        *param_1 = iVar1;
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 1;
      }
      iVar3 = iVar3 + 1;
      psVar5 = psVar5 + 1;
    } while (iVar3 < 3);
  }
  return iVar4;
}

