/* Entry 0x089523F4 | file offset 0x0014F3CC | FUN_089523f4 | bytes 428 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db59c. Boundary still requires runtime validation. */

undefined4 FUN_089523f4(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar5 = param_3[1];
  puVar2 = param_4 + 4;
  uVar6 = param_3[2];
  *puVar2 = *param_3;
  param_4[5] = uVar5;
  param_4[6] = uVar6;
  param_4[7] = 0;
  uVar6 = param_3[5];
  uVar5 = param_3[6];
  param_4[8] = param_3[4];
  param_4[9] = uVar6;
  param_4[10] = uVar5;
  param_4[0xb] = 0;
  uVar5 = param_3[9];
  uVar6 = param_3[10];
  param_4[0xc] = param_3[8];
  param_4[0xd] = uVar5;
  param_4[0xe] = uVar6;
  param_4[0xf] = 0;
  puVar1 = *(uint **)(param_2 + 0x98);
  if (puVar1 == (uint *)0x0) {
    uVar5 = *puVar2;
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 & 8) != 0) {
      puVar4 = (undefined4 *)puVar1[4];
      uVar5 = puVar4[1];
      uVar7 = puVar4[2];
      uVar6 = puVar4[3];
      *puVar2 = *puVar4;
      param_4[5] = uVar5;
      param_4[6] = uVar7;
      param_4[7] = uVar6;
      uVar3 = *puVar1;
    }
    if ((uVar3 & 0x10) != 0) {
      puVar4 = (undefined4 *)puVar1[5];
      uVar5 = puVar4[1];
      uVar7 = puVar4[2];
      uVar6 = puVar4[3];
      param_4[8] = *puVar4;
      param_4[9] = uVar5;
      param_4[10] = uVar7;
      param_4[0xb] = uVar6;
      uVar3 = *puVar1;
    }
    if ((uVar3 & 0x20) == 0) {
      uVar5 = *puVar2;
    }
    else {
      puVar4 = (undefined4 *)puVar1[6];
      uVar5 = puVar4[1];
      uVar7 = puVar4[2];
      uVar6 = puVar4[3];
      param_4[0xc] = *puVar4;
      param_4[0xd] = uVar5;
      param_4[0xe] = uVar7;
      param_4[0xf] = uVar6;
      uVar5 = *puVar2;
    }
  }
  *param_4 = uVar5;
  param_4[1] = param_4[5];
  param_4[2] = param_4[6];
  param_4[3] = param_4[7];
  return 1;
}

