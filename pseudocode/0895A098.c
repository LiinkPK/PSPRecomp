/* Entry 0x0895A098 | file offset 0x00157070 | FUN_0895a098 | bytes 212 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dbd7c. Boundary still requires runtime validation. */

void FUN_0895a098(float param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
  pfVar1 = (float *)*param_5;
  puVar3 = (undefined2 *)pfVar1[2];
  *pfVar1 = pfVar1[1] + (float)param_4[5] * param_1;
  if (*(char *)((int)param_4 + 0x19) == '\0') {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0x1e0;
    puVar3[4] = 0x110;
    puVar3[5] = 0;
  }
  else {
    *puVar3 = (short)*param_4;
    puVar3[1] = (short)param_4[1];
    puVar3[2] = 0;
    uVar2 = 0x1e0;
    if ((uint)(*param_4 + param_4[2]) < 0x1e1) {
      uVar2 = (undefined2)((uint)((*param_4 + param_4[2]) * 0x10000) >> 0x10);
    }
    puVar3[3] = uVar2;
    uVar2 = 0x110;
    if ((uint)(*param_4 + param_4[3]) < 0x111) {
      uVar2 = (undefined2)((uint)((param_4[1] + param_4[3]) * 0x10000) >> 0x10);
    }
    puVar3[4] = uVar2;
    puVar3[5] = 0;
  }
  return;
}

