/* Entry 0x08914D9C | file offset 0x00111D74 | FUN_08914d9c | bytes 188 */

void FUN_08914d9c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_08873d34(0x42700000,3,FUN_08916f5c,0,0,2);
  FUN_08873dec(3,2);
  FUN_089168a4(param_1,0x3c);
  iVar1 = FUN_0891705c(0xffffffff);
  *(undefined4 *)(iVar1 + 0x264) = *(undefined4 *)(iVar1 + 0x264);
  *(uint *)(iVar1 + 0x260) = *(uint *)(iVar1 + 0x260) & 0xfffffffd;
  uVar2 = FUN_0891705c(0xffffffff);
  FUN_08912a6c(uVar2);
  FUN_0890f4ac(param_1 + 0x90);
  FUN_08916f78(0,FUN_08917ad8);
  FUN_08914b64(param_1,6);
  return;
}

