/* Entry 0x08906F6C | file offset 0x00103F44 | FUN_08906f6c | bytes 148 */

bool FUN_08906f6c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1 + 0x202;
  do {
    FUN_089066f8(puVar1);
    FUN_0890666c(puVar1);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0xb8;
  } while (iVar2 < 3);
  FUN_0890c420(param_1 + 0x436);
  iVar2 = FUN_0890314c(*param_1,FUN_08907e24,param_1);
  if (iVar2 == 1) {
    param_1[0x596] = 7;
  }
  return iVar2 == 1;
}

