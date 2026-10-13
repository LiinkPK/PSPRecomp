/* Entry 0x0887100C | file offset 0x0006DFE4 | FUN_0887100c | bytes 220 */

void FUN_0887100c(int param_1)

{
  int iVar1;
  
  if (DAT_089d5fd8 != 0) {
    FUN_089a0ee4();
    FUN_08866ae0(DAT_089d5ec0);
    iVar1 = DAT_089d5ec0;
    FUN_089a3efc(DAT_089d5ec0 + 0x720,param_1);
    FUN_089a3868(iVar1 + 0x760,param_1 + 0x40);
    FUN_089a3868(iVar1 + 0x770,param_1 + 0x50);
    FUN_089a3868(iVar1 + 0x780,param_1 + 0x60);
    FUN_089a3efc(iVar1 + 0x790,param_1 + 0x70);
    FUN_089a3868(iVar1 + 2000,param_1 + 0xb0);
    iVar1 = DAT_089d5ec0;
    *(undefined4 *)(DAT_089d5ec0 + 0x7e0) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(iVar1 + 0x7e4) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined4 *)(iVar1 + 0x7e8) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(iVar1 + 0x7ec) = *(undefined4 *)(param_1 + 0xcc);
    FUN_089a3efc(iVar1 + 0x7f0,param_1 + 0xd0);
    FUN_08866ba8(DAT_089d5ec0);
  }
  return;
}

