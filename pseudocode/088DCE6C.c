/* Entry 0x088DCE6C | file offset 0x000D9E44 | FUN_088dce6c | bytes 140 */

void FUN_088dce6c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_088dc7a8();
  puVar2 = (undefined4 *)FUN_0885c6cc(param_2,iVar1 + 4,0,0,1,0);
  uVar3 = *(undefined4 *)(param_1 + 0x5c);
  *puVar2 = uVar3;
  FUN_08935524(puVar2 + 1,uVar3,iVar1);
  FUN_0885c538(*(undefined4 *)(DAT_089d7830 + 4),*(undefined4 *)(param_1 + 0x5c),0);
  *(undefined4 **)(param_1 + 0x5c) = puVar2;
  return;
}

