/* Entry 0x08956820 | file offset 0x001537F8 | FUN_08956820 | bytes 416 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dbbb4. Boundary still requires runtime validation. */

undefined4
FUN_08956820(float param_1,float param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *(float *)(param_6 + 0x18);
  fVar4 = *(float *)(param_6 + 0x10);
  fVar6 = *(float *)(param_6 + 0x1c);
  fVar1 = *(float *)(param_6 + 0x14);
  fVar3 = *(float *)(param_7 + 0x24);
  fVar2 = *(float *)(param_7 + 0x1c);
  fVar7 = *(float *)(param_5 + 0x18) +
          ((fVar5 * param_2 + fVar4) -
          (*(float *)(param_7 + 0x20) * param_2 + *(float *)(param_7 + 0x18)));
  *(float *)(param_6 + 0x10) = fVar7;
  fVar8 = *(float *)(param_5 + 0x1c) + ((fVar6 * param_2 + fVar1) - (fVar3 * param_2 + fVar2));
  *(float *)(param_6 + 0x14) = fVar8;
  fVar3 = *(float *)(param_7 + 0x24);
  fVar2 = *(float *)(param_5 + 0x20) + (fVar5 - *(float *)(param_7 + 0x20));
  *(float *)(param_6 + 0x18) = fVar2;
  fVar3 = *(float *)(param_5 + 0x24) + (fVar6 - fVar3);
  *(float *)(param_6 + 0x1c) = fVar3;
  fVar2 = (fVar5 * 0.5 * param_2 * param_2 + fVar4 * param_2 + *(float *)(param_6 + 8)) -
          (fVar2 * 0.5 * param_1 * param_1 + fVar7 * param_1);
  *(float *)(param_6 + 8) = fVar2;
  fVar1 = (fVar6 * 0.5 * param_2 * param_2 + fVar1 * param_2 + *(float *)(param_6 + 0xc)) -
          (fVar3 * 0.5 * param_1 * param_1 + fVar8 * param_1);
  *(float *)(param_6 + 0xc) = fVar1;
  if ((fVar2 < 0.0) || (4096.0 <= fVar2)) {
    *(float *)(param_6 + 8) =
         (fVar2 + 4096.0) - (float)(int)((fVar2 + 4096.0) * 0.00024414062) * 4096.0;
  }
  if ((fVar1 < 0.0) || (4096.0 <= fVar1)) {
    *(float *)(param_6 + 0xc) =
         (fVar1 + 4096.0) - (float)(int)((fVar1 + 4096.0) * 0.00024414062) * 4096.0;
  }
  return 1;
}

