/* Entry 0x08886520 | file offset 0x000834F8 | FUN_08886520 | bytes 104 */

void FUN_08886520(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    if (param_2 == '\0') {
      FUN_088d9f5c(iVar1,0,1);
      *(undefined2 *)(*(int *)(param_1 + 4) + 0xe) = 1;
    }
    else {
      FUN_088d9f5c(iVar1,1,1);
    }
  }
  return;
}

