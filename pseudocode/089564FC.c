/* Entry 0x089564FC | file offset 0x001534D4 | FUN_089564fc | bytes 804 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dbb94. Boundary still requires runtime validation. */

void FUN_089564fc(float param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = param_1 * param_1;
  fVar4 = *(float *)(param_5 + 0x18);
  fVar6 = *(float *)(param_6 + 0x24);
  fVar1 = *(float *)(param_6 + 0x1c);
  fVar2 = *(float *)(param_5 + 0x1c);
  fVar5 = *(float *)(param_6 + 0x14);
  *(float *)(param_5 + 8) =
       *(float *)(param_4 + 0x10) +
       ((fVar4 * 0.5 * fVar3 + *(float *)(param_5 + 0x10) * param_1 + *(float *)(param_5 + 8)) -
       (*(float *)(param_6 + 0x20) * 0.5 * fVar3 + *(float *)(param_6 + 0x18) * param_1 +
       *(float *)(param_6 + 0x10)));
  *(float *)(param_5 + 0xc) =
       *(float *)(param_4 + 0x14) +
       ((fVar2 * 0.5 * fVar3 + *(float *)(param_5 + 0x14) * param_1 + *(float *)(param_5 + 0xc)) -
       (fVar6 * 0.5 * fVar3 + fVar1 * param_1 + fVar5));
  fVar1 = *(float *)(param_6 + 0x24);
  fVar3 = *(float *)(param_6 + 0x1c);
  *(float *)(param_5 + 0x10) =
       *(float *)(param_4 + 0x18) +
       ((fVar4 * param_1 + *(float *)(param_5 + 0x10)) -
       (*(float *)(param_6 + 0x20) * param_1 + *(float *)(param_6 + 0x18)));
  *(float *)(param_5 + 0x14) =
       *(float *)(param_4 + 0x1c) +
       ((fVar2 * param_1 + *(float *)(param_5 + 0x14)) - (fVar1 * param_1 + fVar3));
  *(float *)(param_5 + 0x18) = *(float *)(param_4 + 0x20) + (fVar4 - *(float *)(param_6 + 0x20));
  *(float *)(param_5 + 0x1c) = *(float *)(param_4 + 0x24) + (fVar2 - *(float *)(param_6 + 0x24));
  if (((*(ushort *)(*(int *)(param_3 + 0x8c) + 2) & 2) == 0) && (*(char *)(param_4 + 0x4a) != '\0'))
  {
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    *(float *)(param_5 + 8) =
         *(float *)(param_5 + 8) +
         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *(float *)(param_4 + 0x28) -
         *(float *)(param_4 + 0x28));
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    *(float *)(param_5 + 0xc) =
         *(float *)(param_5 + 0xc) +
         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *(float *)(param_4 + 0x2c) -
         *(float *)(param_4 + 0x2c));
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    *(float *)(param_5 + 0x10) =
         *(float *)(param_5 + 0x10) +
         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *(float *)(param_4 + 0x30) -
         *(float *)(param_4 + 0x30));
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    *(float *)(param_5 + 0x14) =
         *(float *)(param_5 + 0x14) +
         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *(float *)(param_4 + 0x34) -
         *(float *)(param_4 + 0x34));
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    *(float *)(param_5 + 0x18) =
         *(float *)(param_5 + 0x18) +
         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *(float *)(param_4 + 0x38) -
         *(float *)(param_4 + 0x38));
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    *(float *)(param_5 + 0x1c) =
         *(float *)(param_5 + 0x1c) +
         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *(float *)(param_4 + 0x3c) -
         *(float *)(param_4 + 0x3c));
  }
  return;
}

