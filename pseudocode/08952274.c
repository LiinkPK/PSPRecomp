/* Entry 0x08952274 | file offset 0x0014F24C | FUN_08952274 | bytes 196 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db54c. Boundary still requires runtime validation. */

undefined4 FUN_08952274(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = param_3[1];
  puVar3 = param_4 + 4;
  uVar5 = param_3[2];
  *puVar3 = *param_3;
  param_4[5] = uVar4;
  param_4[6] = uVar5;
  param_4[7] = 0;
  puVar1 = *(uint **)(param_2 + 0x98);
  if (puVar1 == (uint *)0x0) {
    uVar4 = *puVar3;
  }
  else if ((*puVar1 & 8) == 0) {
    uVar4 = *puVar3;
  }
  else {
    puVar2 = (undefined4 *)puVar1[4];
    uVar4 = puVar2[1];
    uVar6 = puVar2[2];
    uVar5 = puVar2[3];
    *puVar3 = *puVar2;
    param_4[5] = uVar4;
    param_4[6] = uVar6;
    param_4[7] = uVar5;
    uVar4 = *puVar3;
  }
  *param_4 = uVar4;
  param_4[1] = param_4[5];
  param_4[2] = param_4[6];
  param_4[3] = param_4[7];
  return 1;
}

