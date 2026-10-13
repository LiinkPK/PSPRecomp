/* Entry 0x0895EE2C | file offset 0x0015BE04 | FUN_0895ee2c | bytes 264 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dbff4. Boundary still requires runtime validation. */

void FUN_0895ee2c(float param_1,int param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar2 = (float *)(param_2 + 0xc);
  pfVar1 = (float *)(param_2 + 0x14);
  pfVar8 = (float *)(param_2 + 0x1c);
  pfVar5 = param_3 + 4;
  pfVar4 = param_3 + 8;
  fVar9 = param_1 * 0.5 * param_1;
  pfVar7 = param_4 + 4;
  pfVar6 = param_4 + 8;
  uVar3 = 0;
  do {
    *pfVar2 = *param_3 +
              ((*pfVar8 * fVar9 + *pfVar1 * param_1 + *pfVar2) -
              (*pfVar6 * fVar9 + *pfVar7 * param_1 + *param_4));
    fVar10 = *pfVar7;
    fVar11 = *pfVar5;
    uVar3 = uVar3 + 1;
    pfVar2 = pfVar2 + 1;
    param_4 = param_4 + 1;
    pfVar7 = pfVar7 + 1;
    param_3 = param_3 + 1;
    pfVar5 = pfVar5 + 1;
    *pfVar1 = fVar11 + ((*pfVar8 * param_1 + *pfVar1) - (*pfVar6 * param_1 + fVar10));
    fVar11 = *pfVar6;
    fVar10 = *pfVar4;
    pfVar1 = pfVar1 + 1;
    pfVar6 = pfVar6 + 1;
    pfVar4 = pfVar4 + 1;
    *pfVar8 = fVar10 + (*pfVar8 - fVar11);
    pfVar8 = pfVar8 + 1;
  } while (uVar3 < 2);
  return;
}

