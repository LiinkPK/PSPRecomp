/* Entry 0x08805728 | file offset 0x00002700 | FUN_08805728 | bytes 708 */

void FUN_08805728(int param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  bool bVar4;
  short sVar5;
  float fVar6;
  
  FUN_08806cd4(param_1 + 0x6bc,param_1);
  if (*(char *)(param_1 + 0x6ba) != '\0') {
    fVar6 = (float)FUN_08838300(param_1);
    iVar1 = *(int *)(param_1 + 0x690);
    *(float *)(param_1 + 0x69c) = *(float *)(param_1 + 0x69c) + fVar6;
    if ((*(char *)(param_1 + 0x6ba) == '\x01') ||
       (*(float *)(param_1 + 0x694) + *(float *)(param_1 + 0x698) < *(float *)(param_1 + 0x69c))) {
      if (*(short *)(param_1 + 0x6b8) == 0) {
        *(undefined4 *)(param_1 + 0x690) = 0;
        *(undefined4 *)(param_1 + 0x69c) = 0;
        *(undefined4 *)(param_1 + 0x694) = 0;
        *(undefined4 *)(param_1 + 0x6a4) = 0;
        *(undefined4 *)(param_1 + 0x6a0) = 0;
        *(undefined4 *)(param_1 + 0x6ac) = 0;
        *(undefined4 *)(param_1 + 0x6a8) = 0;
        *(undefined2 *)(param_1 + 0x6b8) = 0xffff;
        *(undefined1 *)(param_1 + 0x6ba) = 0;
        *(undefined1 *)(param_1 + 0x6bb) = 0;
        return;
      }
      *(undefined1 *)(param_1 + 0x6ba) = 2;
      *(undefined4 *)(param_1 + 0x698) = 0;
      *(undefined4 *)(param_1 + 0x69c) = 0;
      DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
      *(float *)(param_1 + 0x6a0) =
           ((float)(DAT_09af84d0 >> 0x10 & 0x7fff) * 3.051851e-05 * 2.0 + -1.0) *
           *(float *)(iVar1 + 0xc);
      DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
      *(float *)(param_1 + 0x6a8) =
           ((float)(DAT_09af84d0 >> 0x10 & 0x7fff) * 3.051851e-05 * 2.0 + -1.0) *
           *(float *)(iVar1 + 0x18);
      DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
      *(float *)(param_1 + 0x6ac) =
           ((float)(DAT_09af84d0 >> 0x10 & 0x7fff) * 3.051851e-05 * 2.0 + -1.0) *
           *(float *)(iVar1 + 0x20);
      if ((*(ushort *)(iVar1 + 2) & 1) == 0) {
        bVar4 = true;
        if ((*(ushort *)(iVar1 + 2) & 2) == 0) {
          DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
          bVar4 = (float)(DAT_09af84d0 >> 0x10 & 0x7fff) * 3.051851e-05 < 0.5;
        }
        sVar5 = *(short *)(param_1 + 0x6b8);
      }
      else {
        sVar5 = *(short *)(param_1 + 0x6b8);
        bVar4 = false;
      }
      *(bool *)(param_1 + 0x6bb) = bVar4;
      if (0 < sVar5) {
        *(short *)(param_1 + 0x6b8) = sVar5 + -1;
      }
    }
    iVar2 = 0;
    psVar3 = (short *)(iVar1 + 0x24);
    do {
      if (*psVar3 < 0) {
        return;
      }
      if (*(float *)(param_1 + 0x6b0) < *(float *)(psVar3 + 4)) {
        FUN_08831cec(param_1,(int)*psVar3,(int)psVar3[*(int *)(param_1 + 0x724) + 1]);
        return;
      }
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 6;
    } while (iVar2 < 4);
  }
  return;
}

