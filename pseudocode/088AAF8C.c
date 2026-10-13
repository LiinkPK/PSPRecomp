/* Entry 0x088AAF8C | file offset 0x000A7F64 | FUN_088aaf8c | bytes 156 */

void FUN_088aaf8c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  
  pcVar3 = (code *)*param_2;
  uVar2 = param_2[1];
  iVar4 = 0;
  while( true ) {
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x27c);
    }
    if (iVar4 == 0) break;
    iVar1 = (*pcVar3)(*(undefined4 *)(iVar4 + 0xc0),uVar2);
    if (iVar1 == 1) {
      FUN_088a6a78(iVar4);
    }
  }
  return;
}

