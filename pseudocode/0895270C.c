/* Entry 0x0895270C | file offset 0x0014F6E4 | FUN_0895270c | bytes 308 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db5ec. Boundary still requires runtime validation. */

undefined4 FUN_0895270c(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = param_3[1];
  puVar2 = param_4 + 4;
  uVar5 = param_3[2];
  *puVar2 = *param_3;
  param_4[5] = uVar4;
  param_4[6] = uVar5;
  param_4[7] = 0;
  uVar5 = param_3[5];
  uVar4 = param_3[6];
  param_4[8] = param_3[4];
  param_4[9] = uVar5;
  param_4[10] = uVar4;
  param_4[0xb] = 0;
  puVar1 = *(uint **)(param_2 + 0x98);
  if (puVar1 == (uint *)0x0) {
    uVar4 = *puVar2;
  }
  else {
    if ((*puVar1 & 8) != 0) {
      puVar3 = (undefined4 *)puVar1[4];
      uVar4 = puVar3[1];
      uVar6 = puVar3[2];
      uVar5 = puVar3[3];
      *puVar2 = *puVar3;
      param_4[5] = uVar4;
      param_4[6] = uVar6;
      param_4[7] = uVar5;
    }
    if ((*puVar1 & 0x10) == 0) {
      uVar4 = *puVar2;
    }
    else {
      puVar3 = (undefined4 *)puVar1[5];
      uVar4 = puVar3[1];
      uVar6 = puVar3[2];
      uVar5 = puVar3[3];
      param_4[8] = *puVar3;
      param_4[9] = uVar4;
      param_4[10] = uVar6;
      param_4[0xb] = uVar5;
      uVar4 = *puVar2;
    }
  }
  *param_4 = uVar4;
  param_4[1] = param_4[5];
  param_4[2] = param_4[6];
  param_4[3] = param_4[7];
  return 1;
}

