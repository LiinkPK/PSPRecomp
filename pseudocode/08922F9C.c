/* Entry 0x08922F9C | file offset 0x0011FF74 | FUN_08922f9c | bytes 124 */

void FUN_08922f9c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)FUN_089230f4(param_2);
  uVar3 = *puVar1;
  fVar4 = (float)puVar1[1];
  uVar5 = puVar1[2];
  fVar2 = (float)FUN_08922f88(param_2);
  *param_1 = uVar3;
  param_1[2] = uVar5;
  param_1[1] = fVar4 + fVar2;
  return;
}

