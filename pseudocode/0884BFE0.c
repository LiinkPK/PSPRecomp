/* Entry 0x0884BFE0 | file offset 0x00048FB8 | FUN_0884bfe0 | bytes 220 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0884bfe0(undefined4 param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  uVar1 = FUN_089a04e8();
  bVar2 = false;
  if ((*(int *)(_DAT_08a405e0 + 0x278) != 0) && (*(int *)(_DAT_08a405e0 + 0x278) != 1)) {
    bVar2 = true;
  }
  if (!bVar2) {
    FUN_089a296c(2);
    FUN_089a250c();
    FUN_089a2568();
    FUN_089a25c0();
    FUN_0899fdc4(0);
    FUN_089a0384(1);
    FUN_089a0384(4);
    FUN_089a0384(9);
    FUN_089a119c(1);
    FUN_089a0c8c(0xffffffff);
    FUN_0884be74(param_1,1);
    FUN_0884d9b4(param_1);
    FUN_089a119c(0);
    FUN_0899fdc4(uVar1);
  }
  return;
}

