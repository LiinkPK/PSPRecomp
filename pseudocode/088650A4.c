/* Entry 0x088650A4 | file offset 0x0006207C | FUN_088650a4 | bytes 168 */

void FUN_088650a4(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) != 5) {
    iVar1 = 0;
    while (iVar1 = FUN_088651ac(iVar1), iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0xc) & *(uint *)(param_1 + 0xc)) != 0) {
        FUN_08865158();
        FUN_08865270();
      }
    }
    iVar1 = FUN_0888227c(DAT_089d69a8,0xffffffff,*(undefined4 *)(param_1 + 0x10),FUN_08865278,
                         "GAME_MODE::ExecTask");
    *(int *)(iVar1 + 4) = param_1;
  }
  return;
}

