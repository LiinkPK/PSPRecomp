/* Entry 0x0897CEA8 | file offset 0x00179E80 | FUN_0897cea8 | bytes 524 */

undefined4 FUN_0897cea8(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  
  *param_4 = 0;
  pfVar1 = (float *)FUN_08986e4c(0x100);
  pfVar4 = (float *)0x0;
  if (pfVar1 != (float *)0x0) {
    FUN_08985b58(pfVar1);
    pfVar4 = pfVar1;
  }
  *param_4 = (int)pfVar4;
  if (pfVar4 == (float *)0x0) {
    uVar3 = 0;
  }
  else {
    param_4[1] = 0;
    param_4[2] = 0;
    FUN_08986f0c(pfVar4,param_3,0,1,2);
    iVar2 = FUN_089871e4(pfVar4,param_2);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      if (*(char *)(param_3 + 0x8c) == '\0') {
        *pfVar4 = (float)*(ushort *)(param_3 + 0x84);
        pfVar4[1] = (float)*(ushort *)(param_3 + 0x86);
        iVar2 = (uint)*(ushort *)(param_3 + 0x84) + (uint)*(ushort *)(param_3 + 0x88);
      }
      else {
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        *pfVar4 = (float)*(ushort *)(param_3 + 0x84) +
                  (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                   *(float *)(param_3 + 0x50) - *(float *)(param_3 + 0x50));
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        pfVar4[1] = (float)*(ushort *)(param_3 + 0x86) +
                    (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                     *(float *)(param_3 + 0x54) - *(float *)(param_3 + 0x54));
        iVar2 = (uint)*(ushort *)(param_3 + 0x84) + (uint)*(ushort *)(param_3 + 0x88);
      }
      pfVar4[2] = (float)(iVar2 + -1);
      uVar3 = 1;
      pfVar4[3] = (float)(int)((uint)*(ushort *)(param_3 + 0x86) + (uint)*(ushort *)(param_3 + 0x8a)
                              + -1);
    }
  }
  return uVar3;
}

