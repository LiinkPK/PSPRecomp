/* Entry 0x088D92AC | file offset 0x000D6284 | FUN_088d92ac | bytes 204 */

undefined4 FUN_088d92ac(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  FUN_088d9254();
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    puVar3 = param_1 + 4;
    do {
      iVar2 = FUN_088d8b58(puVar3,param_2,param_3,param_4,iVar4);
      if (iVar2 != 0) {
        return 0xfffffffe;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0x44;
    } while (iVar4 < 7);
    *param_1 = 1;
    uVar1 = 0;
  }
  return uVar1;
}

