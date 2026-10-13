/* Entry 0x08901400 | file offset 0x000FE3D8 | FUN_08901400 | bytes 360 */

int FUN_08901400(undefined4 *param_1,int param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_088b3524(param_3);
  iVar5 = 0;
  if ((iVar1 != 0) && (iVar4 = 0, '\0' < *(char *)(iVar1 + 1))) {
    do {
      psVar2 = (short *)FUN_088b33ec(iVar1,iVar4);
      uVar3 = (uint)psVar2[2];
      if (((uVar3 == 0xffffffff) ||
          ((*(uint *)(DAT_089d726c + (uVar3 >> 5) * 4) & 1 << (uVar3 & 0x1f)) != 0)) &&
         ((param_4 == (uint *)0x0 ||
          (uVar6 = FUN_089985b0(1,0,(int)*psVar2),
          (param_4[1] & (uint)((ulonglong)uVar6 >> 0x20)) == 0 && (*param_4 & (uint)uVar6) == 0))))
      {
        if (param_2 <= iVar5) {
          return iVar5;
        }
        *param_1 = psVar2;
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(char *)(iVar1 + 1));
  }
  return iVar5;
}

