/* Entry 0x0898E328 | file offset 0x0018B300 | FUN_0898e328 | bytes 572 */

void FUN_0898e328(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
  if (*(char *)(param_2 + 0x90) == '\0') {
    *(float *)(param_1 + 0x44) =
         ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * *(float *)(param_2 + 0x48);
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    fVar1 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * *(float *)(param_2 + 0x4c);
    *(float *)(param_1 + 0x48) = fVar1;
    uVar4 = *(undefined4 *)(param_2 + 0x30);
    fVar2 = *(float *)(param_1 + 0x44);
  }
  else {
    fVar1 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * *(float *)(param_2 + 0x48);
    *(float *)(param_1 + 0x48) = fVar1;
    *(float *)(param_1 + 0x44) = fVar1;
    uVar4 = *(undefined4 *)(param_2 + 0x30);
    fVar2 = fVar1;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x3c);
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + fVar1;
  FUN_08935828(param_1,0,0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x70);
  fVar2 = *(float *)(param_2 + 0x74);
  DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
  if (fVar2 != 0.0) {
    *(float *)(param_1 + 0x30) =
         *(float *)(param_1 + 0x30) +
         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar2 - fVar2);
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
  }
  *(float *)(param_1 + 0x4c) =
       *(float *)(param_1 + 0x4c) +
       (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *(float *)(param_2 + 0x80) -
       *(float *)(param_2 + 0x80));
  return;
}

