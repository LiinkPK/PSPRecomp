/* Entry 0x08916324 | file offset 0x001132FC | FUN_08916324 | bytes 92 */

void FUN_08916324(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x570) != 0) {
    func_0x08b49b04(*(int *)(param_1 + 0x570));
    uVar1 = FUN_089110b4();
    FUN_0885c538(uVar1,*(undefined4 *)(param_1 + 0x570),0);
    *(undefined4 *)(param_1 + 0x570) = 0;
    *(undefined1 *)(param_1 + 0x7e9) = 0;
  }
  return;
}

