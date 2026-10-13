/* Entry 0x088FAE9C | file offset 0x000F7E74 | FUN_088fae9c | bytes 92 */

void FUN_088fae9c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  iVar1 = 0x27;
  do {
    uVar3 = ((undefined4 *)(param_2 + iVar2))[1];
    puVar4 = (undefined4 *)((int)&DAT_09afd968 + iVar2 + param_1 * 0x138);
    *puVar4 = *(undefined4 *)(param_2 + iVar2);
    puVar4[1] = uVar3;
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + 8;
  } while (iVar1 != 0);
  return;
}

