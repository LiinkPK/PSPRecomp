/* Entry 0x089237E8 | file offset 0x001207C0 | FUN_089237e8 | bytes 68 */

undefined4 FUN_089237e8(int param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined2 *)(*(int *)(param_1 + 0x20) + 0x12)) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 9:
  case 0xd:
    uVar1 = 1;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}

