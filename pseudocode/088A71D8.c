/* Entry 0x088A71D8 | file offset 0x000A41B0 | FUN_088a71d8 | bytes 92 */

void FUN_088a71d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xd4) != 3) && (iVar1 = FUN_088a751c(param_1), iVar1 == 1)) {
    FUN_088a49ec(*(undefined4 *)(param_1 + 0xcc));
    uVar2 = *(undefined4 *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0xd4) = 3;
    *(undefined4 *)(param_1 + 0xd8) = uVar2;
  }
  return;
}

