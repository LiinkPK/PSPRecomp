/* Entry 0x089A0190 | file offset 0x0019D168 | FUN_089a0190 | bytes 108 */

undefined4 FUN_089a0190(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = sceGeDrawSync(param_2);
    return uVar1;
  default:
    return 0;
  case 3:
    uVar1 = DAT_09af6800;
    break;
  case 4:
    uVar1 = DAT_09af6804;
  }
  uVar1 = sceGeListSync(uVar1);
  return uVar1;
}

