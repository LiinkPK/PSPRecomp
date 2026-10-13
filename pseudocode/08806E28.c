/* Entry 0x08806E28 | file offset 0x00003E00 | FUN_08806e28 | bytes 308 */

void FUN_08806e28(int param_1,undefined4 param_2)

{
  float fVar1;
  
  if (0.0 < *(float *)(param_1 + 0x18)) {
    fVar1 = (float)FUN_08838300(param_2);
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) - fVar1;
    if (*(float *)(param_1 + 0xc) <= 0.0) {
      DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
      *(float *)(param_1 + 0xc) =
           (float)(DAT_09af84d0 >> 0x10 & 0x7fff) * 3.051851e-05 *
           (*(float *)(param_1 + 8) - *(float *)(param_1 + 4)) + *(float *)(param_1 + 4);
      DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
      FUN_088067e0((float)(DAT_09af84d0 >> 0x10 & 0x7fff) * 3.051851e-05 *
                   (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x10)) +
                   *(float *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),param_2);
    }
    fVar1 = (float)FUN_08838300(param_2);
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) - fVar1;
  }
  return;
}

