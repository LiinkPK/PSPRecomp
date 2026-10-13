/* Entry 0x0895F664 | file offset 0x0015C63C | FUN_0895f664 | bytes 260 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dc03c. Boundary still requires runtime validation. */

void FUN_0895f664(float param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  
  pfVar1 = (float *)(param_2 + 0xc);
  pfVar3 = (float *)(param_2 + 0x10);
  fVar4 = param_1 * 0.5 * param_1;
  pfVar2 = (float *)(param_4 + 0x30);
  *(float *)(param_2 + 8) =
       *(float *)(param_3 + 0x1c) +
       ((*pfVar3 * fVar4 + *pfVar1 * param_1 + *(float *)(param_2 + 8)) -
       (*pfVar2 * fVar4 + *(float *)(param_4 + 0x2c) * param_1 + *(float *)(param_4 + 0x1c)));
  *pfVar1 = *(float *)(param_3 + 0x2c) +
            ((*pfVar3 * param_1 + *pfVar1) - (*pfVar2 * param_1 + *(float *)(param_4 + 0x2c)));
  *pfVar3 = *(float *)(param_3 + 0x30) + (*pfVar3 - *pfVar2);
  return;
}

