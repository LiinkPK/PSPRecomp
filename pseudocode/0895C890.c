/* Entry 0x0895C890 | file offset 0x00159868 | FUN_0895c890 | bytes 332 */

uint * FUN_0895c890(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  *param_1 = (uint)*(byte *)((int)param_2 + 0x53);
  uVar3 = 0;
  puVar2 = param_2;
  puVar1 = param_1;
  do {
    uVar4 = *puVar2;
    uVar3 = uVar3 + 1;
    puVar1[3] = uVar4;
    puVar1[1] = uVar4;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar3 < 2);
  puVar1 = param_2 + 4;
  uVar3 = 0;
  puVar2 = param_1;
  do {
    uVar3 = uVar3 + 1;
    puVar2[5] = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 < 2);
  puVar1 = param_2 + 8;
  uVar3 = 0;
  puVar2 = param_1;
  do {
    uVar3 = uVar3 + 1;
    puVar2[7] = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 < 2);
  uVar3 = param_2[3];
  param_1[10] = uVar3;
  param_1[9] = uVar3;
  param_1[0xb] = param_2[7];
  param_1[0xc] = param_2[0xb];
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_0895da4c(param_1,param_2);
  return param_1;
}

