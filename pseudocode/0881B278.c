/* Entry 0x0881B278 | file offset 0x00018250 | FUN_0881b278 | bytes 228 */

undefined4
FUN_0881b278(char *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (param_2 < *(uint *)(param_1 + 4)) {
    iVar3 = param_2 * 0x40;
    if (*(int *)(*(int *)(param_1 + 8) + iVar3 + 0xc) == 0) {
      *(uint *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 4) = param_2;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      iVar2 = *(int *)(param_1 + 8);
    }
    else {
      iVar2 = *(int *)(param_1 + 8);
    }
    *(undefined4 *)(iVar2 + iVar3 + 0xc) = 1;
    *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 + 0x10) = param_3;
    FUN_089a3868(*(int *)(param_1 + 8) + iVar3 + 0x20,param_4);
    FUN_089a3868(*(int *)(param_1 + 8) + iVar3 + 0x30,param_5);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

